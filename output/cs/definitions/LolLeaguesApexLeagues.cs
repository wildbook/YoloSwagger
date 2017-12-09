using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLeaguesApexLeagues
    {
        [DataMember(Name = "challengers")]
        public LolLeaguesLeague[] Challengers { get; set; }

        [DataMember(Name = "masters")]
        public LolLeaguesLeague[] Masters { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesApexLeagues {\n");
            sb.Append("  Challengers: ").Append(Challengers).Append("\n");
            sb.Append("  Masters: ").Append(Masters).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}