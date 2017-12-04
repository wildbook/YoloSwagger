using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerBackdrop {
    [DataMember(Name = "profileIconId")]
    int ProfileIconId {get; set;}

    [DataMember(Name = "championId")]
    int ChampionId {get; set;}

    [DataMember(Name = "backdropType")]
    LolCollectionsCollectionsSummonerBackdropType BackdropType {get; set;}

    [DataMember(Name = "backdropImage")]
    string BackdropImage {get; set;}

    [DataMember(Name = "backdropMaskColor")]
    string BackdropMaskColor {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "backdropVideo")]
    string BackdropVideo {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolCollectionsCollectionsSummonerBackdrop {\n");
      sb.Append("  ProfileIconId: ").Append(ProfileIconId).Append("\n");
      sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
      sb.Append("  BackdropType: ").Append(BackdropType).Append("\n");
      sb.Append("  BackdropImage: ").Append(BackdropImage).Append("\n");
      sb.Append("  BackdropMaskColor: ").Append(BackdropMaskColor).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  BackdropVideo: ").Append(BackdropVideo).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}