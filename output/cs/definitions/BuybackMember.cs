using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct BuybackMember
    {
        [DataMember(Name = "bet")]
        int Bet { get; set; }

        [DataMember(Name = "buybackState")]
        BuybackState BuybackState { get; set; }

        [DataMember(Name = "pay")]
        int Pay { get; set; }

        [DataMember(Name = "playerId")]
        ulong PlayerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BuybackMember {\n");
            sb.Append("  Bet: ").Append(Bet).Append("\n");
            sb.Append("  BuybackState: ").Append(BuybackState).Append("\n");
            sb.Append("  Pay: ").Append(Pay).Append("\n");
            sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}