using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct BasePublicSummonerDTO {
    [DataMember(Name = "internalName")]
    string InternalName {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "profileIconId")]
    int ProfileIconId {get; set;}

    [DataMember(Name = "puuid")]
    string Puuid {get; set;}

    [DataMember(Name = "sumId")]
    ulong SumId {get; set;}

    [DataMember(Name = "acctId")]
    ulong AcctId {get; set;}

    [DataMember(Name = "previousSeasonHighestTier")]
    string PreviousSeasonHighestTier {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class BasePublicSummonerDTO {\n");
      sb.Append("  InternalName: ").Append(InternalName).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  ProfileIconId: ").Append(ProfileIconId).Append("\n");
      sb.Append("  Puuid: ").Append(Puuid).Append("\n");
      sb.Append("  SumId: ").Append(SumId).Append("\n");
      sb.Append("  AcctId: ").Append(AcctId).Append("\n");
      sb.Append("  PreviousSeasonHighestTier: ").Append(PreviousSeasonHighestTier).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}