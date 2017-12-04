using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolAcsAcsChampionGames {
    [DataMember(Name = "queue")]
    int Queue {get; set;}

    [DataMember(Name = "role")]
    string Role {get; set;}

    [DataMember(Name = "lane")]
    string Lane {get; set;}

    [DataMember(Name = "championId")]
    int ChampionId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolAcsAcsChampionGames {\n");
      sb.Append("  Queue: ").Append(Queue).Append("\n");
      sb.Append("  Role: ").Append(Role).Append("\n");
      sb.Append("  Lane: ").Append(Lane).Append("\n");
      sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}