#pragma once
#include <json.hpp>
#include <optional>
#include "LolGeoinfoGeoInfo.hpp"
namespace leagueapi {
  struct LolGeoinfoGeoInfoResponse_t {
    std::string errorMessage;
    LolGeoinfoGeoInfo_t geoInfo;
    bool isLatest;
    bool success;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoGeoInfoResponse_t& v) {
    j["errorMessage"] = v.errorMessage;
    j["geoInfo"] = v.geoInfo;
    j["isLatest"] = v.isLatest;
    j["success"] = v.success;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoGeoInfoResponse_t& v) {
    v.errorMessage = j.at("errorMessage").get<std::string>();
    v.geoInfo = j.at("geoInfo").get<LolGeoinfoGeoInfo_t>();
    v.isLatest = j.at("isLatest").get<bool>();
    v.success = j.at("success").get<bool>();
  }
}
