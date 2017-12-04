using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolEndOfGameEndOfGamePlayer {
    [DataMember(Name = "botPlayer")]
    bool BotPlayer {get; set;}

    [DataMember(Name = "losses")]
    int Losses {get; set;}

    [DataMember(Name = "skinIndex")]
    int SkinIndex {get; set;}

    [DataMember(Name = "skinName")]
    string SkinName {get; set;}

    [DataMember(Name = "teamId")]
    int TeamId {get; set;}

    [DataMember(Name = "profileIconId")]
    int ProfileIconId {get; set;}

    [DataMember(Name = "stats")]
    dynamic Stats {get; set;}

    [DataMember(Name = "championId")]
    int ChampionId {get; set;}

    [DataMember(Name = "elo")]
    int Elo {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "isReportingDisabled")]
    bool IsReportingDisabled {get; set;}

    [DataMember(Name = "gameId")]
    ulong GameId {get; set;}

    [DataMember(Name = "summonerName")]
    string SummonerName {get; set;}

    [DataMember(Name = "userId")]
    ulong UserId {get; set;}

    [DataMember(Name = "spell1Id")]
    int Spell1Id {get; set;}

    [DataMember(Name = "eloChange")]
    int EloChange {get; set;}

    [DataMember(Name = "level")]
    int Level {get; set;}

    [DataMember(Name = "items")]
    int[] Items {get; set;}

    [DataMember(Name = "leaves")]
    int Leaves {get; set;}

    [DataMember(Name = "leaver")]
    bool Leaver {get; set;}

    [DataMember(Name = "spell2Id")]
    int Spell2Id {get; set;}

    [DataMember(Name = "wins")]
    int Wins {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolEndOfGameEndOfGamePlayer {\n");
      sb.Append("  BotPlayer: ").Append(BotPlayer).Append("\n");
      sb.Append("  Losses: ").Append(Losses).Append("\n");
      sb.Append("  SkinIndex: ").Append(SkinIndex).Append("\n");
      sb.Append("  SkinName: ").Append(SkinName).Append("\n");
      sb.Append("  TeamId: ").Append(TeamId).Append("\n");
      sb.Append("  ProfileIconId: ").Append(ProfileIconId).Append("\n");
      sb.Append("  Stats: ").Append(Stats).Append("\n");
      sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
      sb.Append("  Elo: ").Append(Elo).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  IsReportingDisabled: ").Append(IsReportingDisabled).Append("\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
      sb.Append("  UserId: ").Append(UserId).Append("\n");
      sb.Append("  Spell1Id: ").Append(Spell1Id).Append("\n");
      sb.Append("  EloChange: ").Append(EloChange).Append("\n");
      sb.Append("  Level: ").Append(Level).Append("\n");
      sb.Append("  Items: ").Append(Items).Append("\n");
      sb.Append("  Leaves: ").Append(Leaves).Append("\n");
      sb.Append("  Leaver: ").Append(Leaver).Append("\n");
      sb.Append("  Spell2Id: ").Append(Spell2Id).Append("\n");
      sb.Append("  Wins: ").Append(Wins).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}