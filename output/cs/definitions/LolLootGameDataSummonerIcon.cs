using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootGameDataSummonerIcon
    {
        [DataMember(Name = "iconPath")]
        public string IconPath { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootGameDataSummonerIcon {\n");
            sb.Append("  IconPath: ").Append(IconPath).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}