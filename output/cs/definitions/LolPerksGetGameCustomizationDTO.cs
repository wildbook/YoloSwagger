using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPerksGetGameCustomizationDTO {
    [DataMember(Name = "queueType")]
    string QueueType {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPerksGetGameCustomizationDTO {\n");
      sb.Append("  QueueType: ").Append(QueueType).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}