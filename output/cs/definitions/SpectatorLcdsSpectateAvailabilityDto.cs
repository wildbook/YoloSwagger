using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct SpectatorLcdsSpectateAvailabilityDto
    {
        [DataMember(Name = "teamOrSummonerIds")]
        string[] TeamOrSummonerIds { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SpectatorLcdsSpectateAvailabilityDto {\n");
            sb.Append("  TeamOrSummonerIds: ").Append(TeamOrSummonerIds).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}