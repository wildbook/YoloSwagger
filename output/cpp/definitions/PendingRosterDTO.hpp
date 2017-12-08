#pragma once
#include <json.hpp>
#include <optional>
#include "PendingRosterMemberDTO.hpp"
#include "FailedInvite.hpp"
#include "PendingRosterInviteeDTO.hpp"
#include "TicketOfferDTO.hpp"
namespace leagueapi {
  struct PendingRosterDTO_t {
    std::string shortName;
    int32_t logoColor;
    uint64_t captainId;
    std::string name;
    int32_t tier;
    int64_t tournamentId;
    std::vector<TicketOfferDTO_t> ticketOffers;
    std::string invitationId;
    std::vector<FailedInvite_t> inviteFaileds;
    int32_t logo;
    std::vector<PendingRosterMemberDTO_t> members;
    std::vector<PendingRosterInviteeDTO_t> invitees;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterDTO_t& v) {
    j["shortName"] = v.shortName;
    j["logoColor"] = v.logoColor;
    j["captainId"] = v.captainId;
    j["name"] = v.name;
    j["tier"] = v.tier;
    j["tournamentId"] = v.tournamentId;
    j["ticketOffers"] = v.ticketOffers;
    j["invitationId"] = v.invitationId;
    j["inviteFaileds"] = v.inviteFaileds;
    j["logo"] = v.logo;
    j["members"] = v.members;
    j["invitees"] = v.invitees;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterDTO_t& v) {
    v.shortName = j.at("shortName").get<std::string>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.captainId = j.at("captainId").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.tier = j.at("tier").get<int32_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO_t>>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.inviteFaileds = j.at("inviteFaileds").get<std::vector<FailedInvite_t>>();
    v.logo = j.at("logo").get<int32_t>();
    v.members = j.at("members").get<std::vector<PendingRosterMemberDTO_t>>();
    v.invitees = j.at("invitees").get<std::vector<PendingRosterInviteeDTO_t>>();
  }
  inline std::string to_string(const PendingRosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
