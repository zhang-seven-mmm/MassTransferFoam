/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | www.openfoam.com
     \\/     M anipulation  |
-------------------------------------------------------------------------------
    Copyright (C) 2014 OpenFOAM Foundation
    Copyright (C) 2019 OpenCFD Ltd.
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Class
    Foam::immiscibleIncompressibleTwoPhaseMixturePartial

Description
    An immiscible incompressible two-phase mixture transport model

SourceFiles
    immiscibleIncompressibleTwoPhaseMixturePartial.C

\*---------------------------------------------------------------------------*/

#ifndef immiscibleIncompressibleTwoPhaseMixturePartial_H
#define immiscibleIncompressibleTwoPhaseMixturePartial_H

#include "incompressibleTwoPhaseMixturePartial.H"
#include "interfaceProperties.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

/*---------------------------------------------------------------------------*\
          Class immiscibleIncompressibleTwoPhaseMixturePartial Declaration
\*---------------------------------------------------------------------------*/

class immiscibleIncompressibleTwoPhaseMixturePartial
:
    public incompressibleTwoPhaseMixturePartial,
    public interfaceProperties
{

public:

    // Constructors

        //- Construct from components
        immiscibleIncompressibleTwoPhaseMixturePartial
        (
            const volVectorField& U,
            const surfaceScalarField& phi
        );


    //- Destructor
    virtual ~immiscibleIncompressibleTwoPhaseMixturePartial() = default;


    // Member Functions

        //- Correct the transport and interface properties
        virtual void correct()
        {
            incompressibleTwoPhaseMixturePartial::correct();
            interfaceProperties::correct();
        }
        
        //- Read base transportProperties dictionary
        virtual bool read();
};


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //
