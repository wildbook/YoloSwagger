using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLoginUsernameAndPassword {
    [DataMember(Name = "username")]
    string Username {get; set;}

    [DataMember(Name = "password")]
    string Password {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLoginUsernameAndPassword {\n");
      sb.Append("  Username: ").Append(Username).Append("\n");
      sb.Append("  Password: ").Append(Password).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}