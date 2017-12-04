using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolInventoryInventoryResponseDTO {
    [DataMember(Name = "data")]
    LolInventoryInventoryDTO Data {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolInventoryInventoryResponseDTO {\n");
      sb.Append("  Data: ").Append(Data).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}