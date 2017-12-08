#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MultipleReplayMetadataRequestV2_t {
    std::vector<uint64_t> gameIds;
    std::string platformId;
  };

  inline void to_json(nlohmann::json& j, const MultipleReplayMetadataRequestV2_t& v) {
    j["gameIds"] = v.gameIds;
    j["platformId"] = v.platformId;
  }

  inline void from_json(const nlohmann::json& j, MultipleReplayMetadataRequestV2_t& v) {
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>();
    v.platformId = j.at("platformId").get<std::string>();
  }
  inline std::string to_string(const MultipleReplayMetadataRequestV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
