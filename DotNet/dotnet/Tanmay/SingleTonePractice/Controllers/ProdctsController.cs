using SingleTone.Services;
using SingleTone.Product;
using System.Diagnostics;
using Microsoft.AspNetCore.Mvc;
using SingleTone.Models;

namespace SingleTone.Controllers;

public class ProductsController.Controller{
    private readonly IProductCatalogService _productCatalogService;

    public  prodctscontroller(IProductCatalogService productCatalogService )
    {
        console.WriteLine("product instance initiated")

        this.IProductCatalogService=productCatalogService
    }

    public IActionResult insert()
    {
        bool status= this._ProductCatalogeService.insert();
        ViewData["message"]= "new product inserted succesfully"+status;
        return View();

    }

    public IActionResult error()
    {
        return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
    }
}





