    Info<< "Reading temperature...\n" << endl;
    volScalarField T
    (
        IOobject
        (
            "T",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ,
            IOobject::AUTO_WRITE
        ),
        mesh
    );

    Info<< "Reading concentration...\n" << endl;
    volScalarField C
    (
        IOobject
        (
            "C",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ,
            IOobject::AUTO_WRITE
        ),
        mesh
    );

    Info<< "Reading transportProperties\n" << endl;
    IOdictionary transportProperties
    (
        IOobject
        (
            "transportProperties",
            runTime.constant(),
            mesh,
            IOobject::MUST_READ_IF_MODIFIED,
            IOobject::NO_WRITE
        )
    );


    Info<< "Reading Dt\n" << endl;
    dimensionedScalar Dt("Dt", dimViscosity, transportProperties);

    Info<< "Reading Dc\n" << endl;
    dimensionedScalar Dc("Dc", dimViscosity, transportProperties);

    Info<< "Reading Le\n" << endl;
    dimensionedScalar Le("Le", dimless, transportProperties);

    Info<< "Reading N\n" << endl;
    dimensionedScalar N("N", dimless, transportProperties);

    Info<< "Reading sigma\n" << endl;
    dimensionedScalar s("s", dimless, transportProperties);

    Info<< "Reading q\n" << endl;
    dimensionedScalar q("q", dimless, transportProperties);

    Info<< "Reading l\n" << endl;
    dimensionedScalar l("l", dimless, transportProperties);

    dimensionedScalar ddt("ddt", dimless/dimTime, 1.);
    dimensionedScalar eps("eps", dimless, 1.e-6);

