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
    Foam::immiscibleIncompressibleMultiSpeciesTwoPhaseMixture

Description
    An immiscible incompressible two-phase mixture transport model

SourceFiles
    immiscibleIncompressibleMultiSpeciesTwoPhaseMixture.C

\*---------------------------------------------------------------------------*/

#ifndef immiscibleIncompressibleMultiSpeciesTwoPhaseMixture_H
#define immiscibleIncompressibleMultiSpeciesTwoPhaseMixture_H

#include "incompressibleMultiSpeciesTwoPhaseMixture.H"
//#include "multiSpeciesInterfaceProperties.H"
//#include "interfaceProperties.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

/*---------------------------------------------------------------------------*\
          Class immiscibleIncompressibleMultiSpeciesTwoPhaseMixture Declaration
\*---------------------------------------------------------------------------*/

class immiscibleIncompressibleMultiSpeciesTwoPhaseMixture
:
    public incompressibleMultiSpeciesTwoPhaseMixture
    //public multiSpeciesInterfaceProperties
    //public interfaceProperties
{

public:

    // Constructors

        //- Construct from components
        immiscibleIncompressibleMultiSpeciesTwoPhaseMixture
        (
            const volVectorField& U,
            const surfaceScalarField& phi
        );


    //- Destructor
    virtual ~immiscibleIncompressibleMultiSpeciesTwoPhaseMixture() = default;


    // Member Functions

        //- Correct the transport and interface properties
        virtual void correct()
        {
            incompressibleMultiSpeciesTwoPhaseMixture::correct();
            //multiSpeciesInterfaceProperties::correct();
            //interfaceProperties::correct();
        }
        
        //- Read base transportProperties dictionary
        virtual bool read();
};


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //
