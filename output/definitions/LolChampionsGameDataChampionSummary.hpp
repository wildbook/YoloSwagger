#ifndef SWAGGER_TYPES_LolChampionsGameDataChampionSummary_HPP
#define SWAGGER_TYPES_LolChampionsGameDataChampionSummary_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampionsGameDataChampionSummary {
    // 
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionSummary& v) {
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionSummary& v) {
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsGameDataChampionSummary_HPP
