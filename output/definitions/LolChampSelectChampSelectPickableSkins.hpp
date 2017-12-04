#ifndef SWAGGER_TYPES_LolChampSelectChampSelectPickableSkins_HPP
#define SWAGGER_TYPES_LolChampSelectChampSelectPickableSkins_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectChampSelectPickableSkins {
    // 
    std::vector<int32_t> skinIds;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectPickableSkins& v) {
    j["skinIds"] = v.skinIds;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectPickableSkins& v) {
    v.skinIds = j.at("skinIds").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectChampSelectPickableSkins_HPP
