#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashChangeIconRequest_t {
    int32_t iconColorId;
    int32_t iconId;
  };

  inline void to_json(nlohmann::json& j, const LolClashChangeIconRequest_t& v) {
    j["iconColorId"] = v.iconColorId;
    j["iconId"] = v.iconId;
  }

  inline void from_json(const nlohmann::json& j, LolClashChangeIconRequest_t& v) {
    v.iconColorId = j.at("iconColorId").get<int32_t>();
    v.iconId = j.at("iconId").get<int32_t>();
  }
  inline std::string to_string(const LolClashChangeIconRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
