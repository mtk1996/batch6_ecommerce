<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use Illuminate\Support\Facades\Auth;

class ProfileController extends Controller
{
    public function dashboard()
    {
        $user = Auth()->user();
        return view('user.dashboard', compact('user'));
    }
}
