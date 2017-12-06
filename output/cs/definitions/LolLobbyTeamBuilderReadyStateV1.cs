using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderReadyStateV1
    {
        [DataMember(Name = "allowablePremadeSizes")]
        int[] AllowablePremadeSizes { get; set; }

        [DataMember(Name = "premadeSizeAllowed")]
        bool PremadeSizeAllowed { get; set; }

        [DataMember(Name = "readyToMatchmake")]
        bool ReadyToMatchmake { get; set; }

        [DataMember(Name = "requiredPositionCoverageMet")]
        bool RequiredPositionCoverageMet { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderReadyStateV1 {\n");
            sb.Append("  AllowablePremadeSizes: ").Append(AllowablePremadeSizes).Append("\n");
            sb.Append("  PremadeSizeAllowed: ").Append(PremadeSizeAllowed).Append("\n");
            sb.Append("  ReadyToMatchmake: ").Append(ReadyToMatchmake).Append("\n");
            sb.Append("  RequiredPositionCoverageMet: ").Append(RequiredPositionCoverageMet).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}