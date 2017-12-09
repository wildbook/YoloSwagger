using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RecofrienderContactResource
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "action")]
        public string Action { get; set; }

        [DataMember(Name = "displayState")]
        public string DisplayState { get; set; }

        [DataMember(Name = "friendState")]
        public RecofrienderFriendState FriendState { get; set; }

        [DataMember(Name = "imageUrl")]
        public string ImageUrl { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "recommendScore")]
        public long RecommendScore { get; set; }

        [DataMember(Name = "source")]
        public string Source { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RecofrienderContactResource {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  Action: ").Append(Action).Append("\n");
            sb.Append("  DisplayState: ").Append(DisplayState).Append("\n");
            sb.Append("  FriendState: ").Append(FriendState).Append("\n");
            sb.Append("  ImageUrl: ").Append(ImageUrl).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  RecommendScore: ").Append(RecommendScore).Append("\n");
            sb.Append("  Source: ").Append(Source).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}