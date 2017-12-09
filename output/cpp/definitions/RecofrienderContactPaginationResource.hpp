#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderContactPaginationResource_t {
    uint64_t limit;
    uint64_t count;
    uint64_t start;
    uint64_t total;
    bool more;
    uint64_t cached;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactPaginationResource_t& v) {
    j["limit"] = v.limit;
    j["count"] = v.count;
    j["start"] = v.start;
    j["total"] = v.total;
    j["more"] = v.more;
    j["cached"] = v.cached;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactPaginationResource_t& v) {
    v.limit = j.at("limit").get<uint64_t>();
    v.count = j.at("count").get<uint64_t>();
    v.start = j.at("start").get<uint64_t>();
    v.total = j.at("total").get<uint64_t>();
    v.more = j.at("more").get<bool>();
    v.cached = j.at("cached").get<uint64_t>();
  }
  inline std::string to_string(const RecofrienderContactPaginationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
