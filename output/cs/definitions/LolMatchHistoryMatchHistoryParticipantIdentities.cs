using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantIdentities {
    [DataMember(Name = "player")]
    LolMatchHistoryMatchHistoryParticipantIdentityPlayer Player {get; set;}

    [DataMember(Name = "participantId")]
    ushort ParticipantId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolMatchHistoryMatchHistoryParticipantIdentities {\n");
      sb.Append("  Player: ").Append(Player).Append("\n");
      sb.Append("  ParticipantId: ").Append(ParticipantId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}