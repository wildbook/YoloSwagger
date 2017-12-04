using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RecofrienderContactPaginationResource {
    [DataMember(Name = "count")]
    ulong Count {get; set;}

    [DataMember(Name = "cached")]
    ulong Cached {get; set;}

    [DataMember(Name = "start")]
    ulong Start {get; set;}

    [DataMember(Name = "limit")]
    ulong Limit {get; set;}

    [DataMember(Name = "total")]
    ulong Total {get; set;}

    [DataMember(Name = "more")]
    bool More {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RecofrienderContactPaginationResource {\n");
      sb.Append("  Count: ").Append(Count).Append("\n");
      sb.Append("  Cached: ").Append(Cached).Append("\n");
      sb.Append("  Start: ").Append(Start).Append("\n");
      sb.Append("  Limit: ").Append(Limit).Append("\n");
      sb.Append("  Total: ").Append(Total).Append("\n");
      sb.Append("  More: ").Append(More).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}