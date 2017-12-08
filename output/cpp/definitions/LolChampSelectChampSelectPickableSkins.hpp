#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectChampSelectPickableSkins_t {
    std::vector<int32_t> skinIds;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectPickableSkins_t& v) {
    j["skinIds"] = v.skinIds;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectPickableSkins_t& v) {
    v.skinIds = j.at("skinIds").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolChampSelectChampSelectPickableSkins_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
