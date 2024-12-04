{
  fvScalarMatrix TEqn
  (
    fvm::ddt(T)
    ==
    fvm::laplacian(Dt, T)
    + ddt * (1 - s) * 1 / (2 * Le) * sqr(1 - s) * sqr(N) * C * exp(N * (1 - 1 / (T + eps)))
    - ddt * q * (T - s)
  );
  TEqn.solve();
}
