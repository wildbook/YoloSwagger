#ifndef SWAGGER_TYPES_LolChampSelectChampSelectDisabledChampions_HPP
#define SWAGGER_TYPES_LolChampSelectChampSelectDisabledChampions_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectChampSelectDisabledChampions {
    // 
    std::vector<int32_t> championIds;
  };

  void to_json(nlohmann::json& j, const LolChampSelectChampSelectDisabledChampions& v) {
    j["championIds"] = v.championIds;
  }

  void from_json(const nlohmann::json& j, LolChampSelectChampSelectDisabledChampions& v) {
    v.championIds = j.at("championIds").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectChampSelectDisabledChampions_HPP
