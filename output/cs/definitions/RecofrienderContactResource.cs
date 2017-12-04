using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RecofrienderContactResource {
    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "imageUrl")]
    string ImageUrl {get; set;}

    [DataMember(Name = "displayState")]
    string DisplayState {get; set;}

    [DataMember(Name = "source")]
    string Source {get; set;}

    [DataMember(Name = "friendState")]
    RecofrienderFriendState FriendState {get; set;}

    [DataMember(Name = "action")]
    string Action {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "recommendScore")]
    long RecommendScore {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RecofrienderContactResource {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  ImageUrl: ").Append(ImageUrl).Append("\n");
      sb.Append("  DisplayState: ").Append(DisplayState).Append("\n");
      sb.Append("  Source: ").Append(Source).Append("\n");
      sb.Append("  FriendState: ").Append(FriendState).Append("\n");
      sb.Append("  Action: ").Append(Action).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  RecommendScore: ").Append(RecommendScore).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}