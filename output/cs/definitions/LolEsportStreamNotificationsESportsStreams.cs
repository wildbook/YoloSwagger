using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsStreams {
    [DataMember(Name = "teamAId")]
    long TeamAId {get; set;}

    [DataMember(Name = "teamBLogoUrl")]
    string TeamBLogoUrl {get; set;}

    [DataMember(Name = "teamBName")]
    string TeamBName {get; set;}

    [DataMember(Name = "teamBGuid")]
    string TeamBGuid {get; set;}

    [DataMember(Name = "teamBId")]
    long TeamBId {get; set;}

    [DataMember(Name = "teamAGuid")]
    string TeamAGuid {get; set;}

    [DataMember(Name = "teamAName")]
    string TeamAName {get; set;}

    [DataMember(Name = "teamALogoUrl")]
    string TeamALogoUrl {get; set;}

    [DataMember(Name = "tournamentDescription")]
    string TournamentDescription {get; set;}

    [DataMember(Name = "title")]
    string Title {get; set;}

    [DataMember(Name = "teamAAcronym")]
    string TeamAAcronym {get; set;}

    [DataMember(Name = "teamBAcronym")]
    string TeamBAcronym {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolEsportStreamNotificationsESportsStreams {\n");
      sb.Append("  TeamAId: ").Append(TeamAId).Append("\n");
      sb.Append("  TeamBLogoUrl: ").Append(TeamBLogoUrl).Append("\n");
      sb.Append("  TeamBName: ").Append(TeamBName).Append("\n");
      sb.Append("  TeamBGuid: ").Append(TeamBGuid).Append("\n");
      sb.Append("  TeamBId: ").Append(TeamBId).Append("\n");
      sb.Append("  TeamAGuid: ").Append(TeamAGuid).Append("\n");
      sb.Append("  TeamAName: ").Append(TeamAName).Append("\n");
      sb.Append("  TeamALogoUrl: ").Append(TeamALogoUrl).Append("\n");
      sb.Append("  TournamentDescription: ").Append(TournamentDescription).Append("\n");
      sb.Append("  Title: ").Append(Title).Append("\n");
      sb.Append("  TeamAAcronym: ").Append(TeamAAcronym).Append("\n");
      sb.Append("  TeamBAcronym: ").Append(TeamBAcronym).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}