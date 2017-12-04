using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PlayerNotificationConfigResource {
    [DataMember(Name = "ExpirationCheckFrequency")]
    ulong ExpirationCheckFrequency {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PlayerNotificationConfigResource {\n");
      sb.Append("  ExpirationCheckFrequency: ").Append(ExpirationCheckFrequency).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}