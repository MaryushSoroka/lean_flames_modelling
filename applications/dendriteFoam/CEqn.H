{
  fvScalarMatrix CEqn
  (
      fvm::ddt(C)
   ==
      fvm::laplacian(Dc / Le, C) 
    - ddt * 1 / (2 * Le) * sqr(1 - s) * sqr(N) * C * exp(N * (1 - 1 / (T + eps)))
  );

  CEqn.solve();
}
