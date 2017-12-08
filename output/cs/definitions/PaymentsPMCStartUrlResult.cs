using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PaymentsPMCStartUrlResult
    {
        [DataMember(Name = "localeId")]
        string LocaleId { get; set; }

        [DataMember(Name = "playerFacingId")]
        string PlayerFacingId { get; set; }

        [DataMember(Name = "userId")]
        string UserId { get; set; }

        [DataMember(Name = "pmcStartUrl")]
        string PmcStartUrl { get; set; }

        [DataMember(Name = "summonerLevel")]
        short SummonerLevel { get; set; }

        [DataMember(Name = "id")]
        string Id { get; set; }

        [DataMember(Name = "createdAt")]
        string CreatedAt { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PaymentsPMCStartUrlResult {\n");
            sb.Append("  LocaleId: ").Append(LocaleId).Append("\n");
            sb.Append("  PlayerFacingId: ").Append(PlayerFacingId).Append("\n");
            sb.Append("  UserId: ").Append(UserId).Append("\n");
            sb.Append("  PmcStartUrl: ").Append(PmcStartUrl).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}