#pragma once
#include <json.hpp>
#include <optional>
#include "LolGeoinfoGeoInfo.hpp"
namespace leagueapi {
  struct LolGeoinfoGeoInfoResponse_t {
    std::string errorMessage;
    bool success;
    LolGeoinfoGeoInfo_t geoInfo;
    bool isLatest;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoGeoInfoResponse_t& v) {
    j["errorMessage"] = v.errorMessage;
    j["success"] = v.success;
    j["geoInfo"] = v.geoInfo;
    j["isLatest"] = v.isLatest;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoGeoInfoResponse_t& v) {
    v.errorMessage = j.at("errorMessage").get<std::string>();
    v.success = j.at("success").get<bool>();
    v.geoInfo = j.at("geoInfo").get<LolGeoinfoGeoInfo_t>();
    v.isLatest = j.at("isLatest").get<bool>();
  }
  inline std::string to_string(const LolGeoinfoGeoInfoResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
