using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PaymentsPMCStartUrlRequest
    {
        [DataMember(Name = "isPrepaid")]
        bool IsPrepaid { get; set; }

        [DataMember(Name = "summonerLevel")]
        short SummonerLevel { get; set; }

        [DataMember(Name = "gifteeMessage")]
        string GifteeMessage { get; set; }

        [DataMember(Name = "gifteeAccountId")]
        int GifteeAccountId { get; set; }

        [DataMember(Name = "localeId")]
        string LocaleId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PaymentsPMCStartUrlRequest {\n");
            sb.Append("  IsPrepaid: ").Append(IsPrepaid).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("  GifteeMessage: ").Append(GifteeMessage).Append("\n");
            sb.Append("  GifteeAccountId: ").Append(GifteeAccountId).Append("\n");
            sb.Append("  LocaleId: ").Append(LocaleId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}