while (!ring.empty()) {
        string fina;
        fina = ring.top();
        ring.pop();
        if (!ring.empty()) {
            z = z + fina + " ";
        } else {
            z = z + fina;
        }
        fina = "";
    }