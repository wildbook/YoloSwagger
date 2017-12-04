using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct QueryResultDTO {
    [DataMember(Name = "lastUpdate")]
    long LastUpdate {get; set;}

    [DataMember(Name = "queryToLootNames")]
    dynamic QueryToLootNames {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class QueryResultDTO {\n");
      sb.Append("  LastUpdate: ").Append(LastUpdate).Append("\n");
      sb.Append("  QueryToLootNames: ").Append(QueryToLootNames).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}