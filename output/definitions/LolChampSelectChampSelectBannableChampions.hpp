#ifndef SWAGGER_TYPES_LolChampSelectChampSelectBannableChampions_HPP
#define SWAGGER_TYPES_LolChampSelectChampSelectBannableChampions_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectChampSelectBannableChampions {
    // 
    std::vector<int32_t> championIds;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectBannableChampions& v) {
    j["championIds"] = v.championIds;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectBannableChampions& v) {
    v.championIds = j.at("championIds").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectChampSelectBannableChampions_HPP
