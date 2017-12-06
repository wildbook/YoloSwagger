using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PaymentsFrontEndRequest
    {
        [DataMember(Name = "gifteeAccountId")]
        int GifteeAccountId { get; set; }

        [DataMember(Name = "gifteeMessage")]
        string GifteeMessage { get; set; }

        [DataMember(Name = "isPrepaid")]
        bool IsPrepaid { get; set; }

        [DataMember(Name = "localeId")]
        string LocaleId { get; set; }

        [DataMember(Name = "rsoToken")]
        string RsoToken { get; set; }

        [DataMember(Name = "summonerLevel")]
        short SummonerLevel { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PaymentsFrontEndRequest {\n");
            sb.Append("  GifteeAccountId: ").Append(GifteeAccountId).Append("\n");
            sb.Append("  GifteeMessage: ").Append(GifteeMessage).Append("\n");
            sb.Append("  IsPrepaid: ").Append(IsPrepaid).Append("\n");
            sb.Append("  LocaleId: ").Append(LocaleId).Append("\n");
            sb.Append("  RsoToken: ").Append(RsoToken).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}