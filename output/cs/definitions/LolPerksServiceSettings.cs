using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPerksServiceSettings {
    [DataMember(Name = "serverSideStorageAvailable")]
    bool ServerSideStorageAvailable {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPerksServiceSettings {\n");
      sb.Append("  ServerSideStorageAvailable: ").Append(ServerSideStorageAvailable).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}