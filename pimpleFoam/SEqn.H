{
    fvScalarMatrix SEqn
    (
        fvm::ddt(s)
      + fvm::div(phi, s)
    );

    SEqn.relax();

    SEqn.solve();

}
