#ifndef SWAGGER_TYPES_LolChampSelectLegacyChampSelectPickableChampions_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyChampSelectPickableChampions_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectLegacyChampSelectPickableChampions {
    // 
    std::vector<int32_t> championIds;
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectPickableChampions& v) {
    j["championIds"] = v.championIds;
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectPickableChampions& v) {
    v.championIds = j.at("championIds").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyChampSelectPickableChampions_HPP