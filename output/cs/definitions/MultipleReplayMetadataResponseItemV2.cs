using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct MultipleReplayMetadataResponseItemV2 {
    [DataMember(Name = "status")]
    ReplayResponseStatus Status {get; set;}

    [DataMember(Name = "gameId")]
    ulong GameId {get; set;}

    [DataMember(Name = "metadata")]
    ReplayMetadataV2 Metadata {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class MultipleReplayMetadataResponseItemV2 {\n");
      sb.Append("  Status: ").Append(Status).Append("\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("  Metadata: ").Append(Metadata).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}