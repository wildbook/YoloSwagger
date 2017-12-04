using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PlayerPreferences {
    [DataMember(Name = "hash")]
    string Hash {get; set;}

    [DataMember(Name = "version")]
    string Version {get; set;}

    [DataMember(Name = "data")]
    string Data {get; set;}

    [DataMember(Name = "type")]
    string Type {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PlayerPreferences {\n");
      sb.Append("  Hash: ").Append(Hash).Append("\n");
      sb.Append("  Version: ").Append(Version).Append("\n");
      sb.Append("  Data: ").Append(Data).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}