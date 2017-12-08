#pragma once
#include <json.hpp>
#include <optional>
#include "LolGeoinfoGeoInfo.hpp"
namespace leagueapi {
  struct LolGeoinfoGeoInfoResponse_t {
    LolGeoinfoGeoInfo_t geoInfo;
    bool_t isLatest;
    std::string_t errorMessage;
    bool_t success;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoGeoInfoResponse_t& v) {
    j["geoInfo"] = v.geoInfo;
    j["isLatest"] = v.isLatest;
    j["errorMessage"] = v.errorMessage;
    j["success"] = v.success;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoGeoInfoResponse_t& v) {
    v.geoInfo = j.at("geoInfo").get<LolGeoinfoGeoInfo_t>();
    v.isLatest = j.at("isLatest").get<bool_t>();
    v.errorMessage = j.at("errorMessage").get<std::string_t>();
    v.success = j.at("success").get<bool_t>();
  }
  inline std::string to_string(const LolGeoinfoGeoInfoResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
