#ifndef SWAGGER_TYPES_LolChampSelectChampSelectPickableChampions_HPP
#define SWAGGER_TYPES_LolChampSelectChampSelectPickableChampions_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectChampSelectPickableChampions {
    // 
    std::vector<int32_t> championIds;
  };

  void to_json(nlohmann::json& j, const LolChampSelectChampSelectPickableChampions& v) {
    j["championIds"] = v.championIds;
  }

  void from_json(const nlohmann::json& j, LolChampSelectChampSelectPickableChampions& v) {
    v.championIds = j.at("championIds").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectChampSelectPickableChampions_HPP
