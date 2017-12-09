using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RecofrienderContactStateResource
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "action")]
        public string Action { get; set; }

        [DataMember(Name = "displayState")]
        public string DisplayState { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RecofrienderContactStateResource {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  Action: ").Append(Action).Append("\n");
            sb.Append("  DisplayState: ").Append(DisplayState).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}