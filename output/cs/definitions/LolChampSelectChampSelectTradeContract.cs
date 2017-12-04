using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChampSelectChampSelectTradeContract {
    [DataMember(Name = "state")]
    LolChampSelectChampSelectTradeState State {get; set;}

    [DataMember(Name = "cellId")]
    long CellId {get; set;}

    [DataMember(Name = "id")]
    long Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChampSelectChampSelectTradeContract {\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("  CellId: ").Append(CellId).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}