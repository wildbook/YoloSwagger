using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct Cookie {
    [DataMember(Name = "domain")]
    string Domain {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "url")]
    string Url {get; set;}

    [DataMember(Name = "expires")]
    long Expires {get; set;}

    [DataMember(Name = "value")]
    string Value {get; set;}

    [DataMember(Name = "path")]
    string Path {get; set;}

    [DataMember(Name = "httponly")]
    bool Httponly {get; set;}

    [DataMember(Name = "secure")]
    bool Secure {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class Cookie {\n");
      sb.Append("  Domain: ").Append(Domain).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Url: ").Append(Url).Append("\n");
      sb.Append("  Expires: ").Append(Expires).Append("\n");
      sb.Append("  Value: ").Append(Value).Append("\n");
      sb.Append("  Path: ").Append(Path).Append("\n");
      sb.Append("  Httponly: ").Append(Httponly).Append("\n");
      sb.Append("  Secure: ").Append(Secure).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}