using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RsoAuthRSOPlayerCredentials {
    [DataMember(Name = "platformId")]
    string PlatformId {get; set;}

    [DataMember(Name = "username")]
    string Username {get; set;}

    [DataMember(Name = "password")]
    string Password {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RsoAuthRSOPlayerCredentials {\n");
      sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
      sb.Append("  Username: ").Append(Username).Append("\n");
      sb.Append("  Password: ").Append(Password).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}