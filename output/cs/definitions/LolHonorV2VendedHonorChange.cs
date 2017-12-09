using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolHonorV2VendedHonorChange
    {
        [DataMember(Name = "actionType")]
        public string ActionType { get; set; }

        [DataMember(Name = "currentState")]
        public LolHonorV2VendedHonorState CurrentState { get; set; }

        [DataMember(Name = "previousState")]
        public LolHonorV2VendedHonorState PreviousState { get; set; }

        [DataMember(Name = "reward")]
        public LolHonorV2Reward Reward { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolHonorV2VendedHonorChange {\n");
            sb.Append("  ActionType: ").Append(ActionType).Append("\n");
            sb.Append("  CurrentState: ").Append(CurrentState).Append("\n");
            sb.Append("  PreviousState: ").Append(PreviousState).Append("\n");
            sb.Append("  Reward: ").Append(Reward).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}