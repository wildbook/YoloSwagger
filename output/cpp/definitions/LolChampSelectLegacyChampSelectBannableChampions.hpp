#ifndef SWAGGER_TYPES_LolChampSelectLegacyChampSelectBannableChampions_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyChampSelectBannableChampions_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectLegacyChampSelectBannableChampions {
    // 
    std::vector<int32_t> championIds;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectBannableChampions& v) {
    j["championIds"] = v.championIds;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectBannableChampions& v) {
    v.championIds = j.at("championIds").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyChampSelectBannableChampions_HPP