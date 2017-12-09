using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolCollectionsCollectionsMastery
    {
        [DataMember(Name = "id")]
        public uint Id { get; set; }

        [DataMember(Name = "rank")]
        public int Rank { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsCollectionsMastery {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Rank: ").Append(Rank).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}